module Client = {
  let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
  let httpLink =
    ApolloLinks.createHttpLink(~uri="http://localhost:55989", ());

  let instance =
    ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());
};

let component = ReasonReact.statelessComponent("GraphQLAppRoot");

let make = _children => {
  ...component,
  render: _self =>
    <ReasonApollo.Provider client=Client.instance>
      <StarWarsBoard />
    </ReasonApollo.Provider>,
};