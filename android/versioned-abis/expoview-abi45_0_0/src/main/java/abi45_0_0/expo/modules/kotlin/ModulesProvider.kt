package abi45_0_0.expo.modules.kotlin

import abi45_0_0.expo.modules.kotlin.modules.Module

interface ModulesProvider {
  fun getModulesList(): List<Class<out Module>>
}
