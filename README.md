## Demo App for ReasonML ByteConf

`yarn install`
`cd swapi-graphql` `yarn install`

For Github REST api
- in `fetchRepos.re` change `TOKEN` to actual github token

For StarWars GraphQL api 
- `cd swapi-graphql` to run server `npm start`
- change `http://localhost:55989` in `GraphQLAppRoot.re` to whatever port you are running 

For Github GraphQL api
- rename `graphql_schema_github` to `graphql_schema`
- go to `GithubBoard.re` and uncomment it
- put your github token (Settings -> Github Tokens) in `GraphQLAppGithub`
- put `<GithubBoard />` in Provider component in `GraphQLAppGithub`
- comment out `StarWarsBoard.re`
- substitute `<StarWarsBoard />` for a `div` in `GraphQLAppRoot`


Slides are available here: [https://slides.com/vladimirnovick/reasonable-graphql](https://slides.com/vladimirnovick/reasonable-graphql)

