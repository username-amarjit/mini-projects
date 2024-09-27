import { useState } from "react";

function Square({ value, handleClick }) {
  // const [value2, setValue] = useState(value);
  // function handleClick() {
  //   console.log('click')
  //   setValue('X');
  // }
  return (
    <button className="square" onClick={handleClick}>
      {value}
    </button>
  );
}

export default function Board() {
  const [xIsNext, setXIsNext] = useState(false);
  const [squares, setSquares] = useState(Array(9).fill(null));

  
  function checkWinner(arr) {
    const lines = [
      [0, 1, 2],
      [3, 4, 5],
      [6, 7, 8],
      [0, 3, 6],
      [1, 4, 7],
      [2, 5, 8],
      [0, 4, 8],
      [2, 4, 6],
    ];
    
    for (let i = 0; i < lines.length; i += 1) {
      let [a, b, c] = lines[i];
      console.log(arr[a], arr[b], arr[c]);
      if (arr[a] === arr[b] && arr[b] === arr[c]) {
        console.log(arr[a]);
        return arr[a];
      }
    }
    return;
  }

  const winner = checkWinner(squares)
  
  let status;
  if(winner){
    status = 'Winner '+winner;
  }else{
    status = 'Next turn is '+(!xIsNext ? "X" : "O");
  }

  function btnClick(i) {
    if (squares[i] || checkWinner(squares)) {
      return;
    }
    const nextsquares = squares.slice();
    if (xIsNext) {
      nextsquares[i] = "O";
    } else {
      nextsquares[i] = "X";
    }
    setSquares(nextsquares);
    console.log(nextsquares);
    setXIsNext(!xIsNext);
  }
  return (
    <>
      <div className="status">{status}</div>
      <div className="board-row">
        <Square value={squares[0]} handleClick={() => btnClick(0)} />
        <Square value={squares[1]} handleClick={() => btnClick(1)} />
        <Square value={squares[2]} handleClick={() => btnClick(2)} />
      </div>
      <div className="board-row">
        <Square value={squares[3]} handleClick={() => btnClick(3)} />
        <Square value={squares[4]} handleClick={() => btnClick(4)} />
        <Square value={squares[5]} handleClick={() => btnClick(5)} />
      </div>
      <div className="board-row">
        <Square value={squares[6]} handleClick={() => btnClick(6)} />
        <Square value={squares[7]} handleClick={() => btnClick(7)} />
        <Square value={squares[8]} handleClick={() => btnClick(8)} />
      </div>
    </>
  );
}

// import { useState } from 'react';

// function Square({ value, onSquareClick }) {
//   return (
//     <button className="square" onClick={onSquareClick}>
//       {value}
//     </button>
//   );
// }

// export default function Board() {
//   const [squares, setSquares] = useState(Array(9).fill(null));

//   function handleClick(i) {
//     const nextSquares = squares.slice();
//     nextSquares[i] = 'X';
//     setSquares(nextSquares);
//   }

//   return (
//     <>
//       <div className="board-row">
//         <Square value={squares[0]} onSquareClick={() => handleClick(0)} />
//         <Square value={squares[1]} onSquareClick={() => handleClick(1)} />
//         <Square value={squares[2]} onSquareClick={() => handleClick(2)} />
//       </div>
//       <div className="board-row">
//         <Square value={squares[3]} onSquareClick={() => handleClick(3)} />
//         <Square value={squares[4]} onSquareClick={() => handleClick(4)} />
//         <Square value={squares[5]} onSquareClick={() => handleClick(5)} />
//       </div>
//       <div className="board-row">
//         <Square value={squares[6]} onSquareClick={() => handleClick(6)} />
//         <Square value={squares[7]} onSquareClick={() => handleClick(7)} />
//         <Square value={squares[8]} onSquareClick={() => handleClick(8)} />
//       </div>
//     </>
//   );
// }
