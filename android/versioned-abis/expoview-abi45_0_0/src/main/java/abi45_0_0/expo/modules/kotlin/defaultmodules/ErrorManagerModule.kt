package abi45_0_0.expo.modules.kotlin.defaultmodules

import android.os.Bundle
import abi45_0_0.expo.modules.kotlin.exception.CodedException
import abi45_0_0.expo.modules.kotlin.modules.Module
import abi45_0_0.expo.modules.kotlin.modules.ModuleDefinition

private const val onNewException = "ExpoModulesCoreErrorManager.onNewException"

class ErrorManagerModule : Module() {
  override fun definition() = ModuleDefinition {
    name("ExpoModulesCoreErrorManager")
    events(onNewException)
  }

  fun reportExceptionToLogBox(codedException: CodedException) {
    val eventEmitter = appContext.eventEmitter(this) ?: return
    eventEmitter.emit(
      onNewException,
      Bundle().apply {
        putString("message", codedException.message ?: codedException.toString())
      }
    )
  }
}
