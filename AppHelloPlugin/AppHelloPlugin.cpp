/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#include "AppHelloPlugin.h"

// ITK includes
#ifdef BUILD_ImageIO_PLUGIN
const char* plugin_factory_type = "ImageIO";
# include <itkImageFileReader.h>
#endif
#ifdef BUILD_TransformIO_PLUGIN
const char* plugin_factory_type = "TransformIO";
# include <itkTransformFileReader.h>
#endif

// STD includes
#include <iostream>

void AppHelloPlugin_DisplayHello()
{
  std::cout << "Hello from plugin loading " << plugin_factory_type << std::endl;
}
