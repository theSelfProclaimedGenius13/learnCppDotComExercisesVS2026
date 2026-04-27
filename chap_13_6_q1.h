#pragma once
#include<iostream>
#include<optional>
#include<string_view>
enum class Animal {};
constexpr std::string_view getAnimalName(Animal animal);
void printNumberOfLegs(std::string_view animalName);
void result_message_chap_13_6_q1();
constexpr std::optional<Animal> getAnimalFromString(std::string_view animalName);