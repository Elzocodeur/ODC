import { NgFor } from '@angular/common';
import { Component } from '@angular/core';
import { Router } from '@angular/router';

@Component({
  selector: 'app-signup',
  standalone: true,
  imports: [NgFor],
  templateUrl: './signup.component.html',
  styleUrls: ['./signup.component.css']
})
export class SignupComponent {
  pinInputs: number[] = [1, 2, 3, 4];
  confirmPinInputs: number[] = [1, 2, 3, 4];

  constructor(private router: Router) {}

  moveToNext(event: KeyboardEvent) {
    // La logique de navigation entre les champs de code PIN
  }

  handleSignup(event: Event) {
    event.preventDefault();
    // Ajouter la logique d'inscription
  }

  showLogin() {
    this.router.navigate(['/login']);
  }
}
