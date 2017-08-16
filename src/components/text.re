let component = ReasonReact.statelessComponent "Text";

let make ::style=? children => {
  ...component,
  render: fun _self => <p style=?style> (ReasonReact.arrayToElement children) </p>
};
