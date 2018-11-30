[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo: string = "./logo.svg";

open Utils;

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h2> {message |> ste} </h2>
      </div>
      <GraphQLAppRoot />
    </div>,
};