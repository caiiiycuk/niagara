#pragma once

bool isInstanceExtensionSupported(const char* name);

uint32_t apiVersion();
bool isBufferDeviceAddressEnabled(); // false when NIAGARA_API=1.3 dropped the feature; buffer addresses are then 0
VkInstance createInstance();
VkDebugUtilsMessengerEXT registerDebugCallback(VkInstance instance);

uint32_t getGraphicsFamilyIndex(VkPhysicalDevice physicalDevice);
VkPhysicalDevice pickPhysicalDevice(VkPhysicalDevice* physicalDevices, uint32_t physicalDeviceCount);

VkDevice createDevice(VkInstance instance, VkPhysicalDevice physicalDevice, uint32_t familyIndex, bool meshShadingSupported, bool meshShaderQueriesSupported, bool raytracingSupported, bool clusterrtSupported, bool descheapSupported, bool ommSupported);
