import { NgFor } from '@angular/common';
import { Component } from '@angular/core';

interface Contact {
  name: string;
  number: string;
}

@Component({
  selector: 'app-credit',
  standalone: true,
  imports: [NgFor],
  templateUrl: './credit.component.html',
  styleUrls: ['./credit.component.css']
})
export class CreditComponen {
  favorites: Contact[] = [
    { name: 'Pitô Kara', number: '77 194 76 55' },
    { name: 'Mousco Gning', number: '77 352 81 38' },
    { name: 'Mon Père', number: '78 426 13 54' },
    { name: 'Mr Diallo', number: '78 475 16 39' },
    { name: 'Omar Dia Génie Pétrolier', number: '77 826 54 08' },
  ];
}
