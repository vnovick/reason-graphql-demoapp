let component = ReasonReact.statelessComponent("GraphQLAppGithub");
module Client = {
  let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();

  let accessToken = "913bbd8cce1a49d0238b9e11ab778cbe68ab1eb5";

  let contextHandler = () => {
    let headers = {
      "headers": {
        "authorization": {j|Bearer $accessToken|j},
      },
    };
    headers;
  };

  let authLink = ApolloLinks.createContextLink(contextHandler);

  let httpLink =
    ApolloLinks.createHttpLink(~uri="https://api.github.com/graphql", ());

  let instance =
    ReasonApollo.createApolloClient(
      ~link=ApolloLinks.from([|authLink, httpLink|]),
      ~cache=inMemoryCache,
      (),
    );
};

let make = _children => {
  ...component,
  render: _self =>
    <ReasonApollo.Provider client=Client.instance>
      <div />
    </ReasonApollo.Provider>,
};

/* <GithubBoard /> */