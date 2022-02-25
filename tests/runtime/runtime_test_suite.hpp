/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2020 Aksel Alpay and contributors
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <boost/test/unit_test.hpp>

#ifndef HIPSYCL_RT_TESTS_HPP
#define HIPSYCL_RT_TESTS_HPP

#include "../common/reset.hpp"

#include "{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Resources/deployments/CreateVmss-nvidia.nvidia_hpc_sdk_vmi-nvidia_hpc_s-20211018155718",
  "name": "CreateVmss-nvidia.nvidia_hpc_sdk_vmi-nvidia_hpc_s-20211018155718",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "marketplaceItemId": ""
  },
  "properties": {
    "templateHash": "14519629008595135811",
	"FARM_HASH": ""53816efdb512fd6e051c8648264a915d21fc014f"

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": false,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "ReadOnly",
                        "writeAcceleratorEnabled": true,{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 10024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": true,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": true,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8000"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8000"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",
    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 20
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",
        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",
                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": true,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",
                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",
                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "writeOnly",
                        "writeAcceleratorEnabled": true,
                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 100024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": false,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"
                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": false,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8000"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8000"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "8"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",{
  "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394,01fjc3pn3syj80eghd1x64e6tp01fjc3qqw7mrcffykd0b9ma59rdwrdngowmnom",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/0x5219b9dE177C374a399da349E646C752C257C5/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 2
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}
    "parameters": {
      "location": {
        "type": "String",
        "value": "westus"
      },
      "osDiskType": {
        "type": "String",
        "value": "StandardSSD_LRS"
      },
      "dataDisks": {
        "type": "Array",
        "value": [
          {
            "lun": 0,
            "createOption": "empty",
            "caching": "ReadOnly",
            "writeAcceleratorEnabled": false,
            "id": null,
            "name": "Nvidiapcaeon_DataDisk_0",
            "storageAccountType": "StandardSSD_LRS",
            "diskSizeGB": 1024,
            "diskIOPSReadWrite": -1,
            "diskMBpsReadWrite": -1,
            "diskEncryptionSet": null
          }
        ]
      },
      "addressPrefixes": {
        "type": "Array",
        "value": [
          "172.17.0.0/16"
        ]
      },
      "subnets": {
        "type": "Array",
        "value": [
          {
            "name": "default",
            "properties": {
              "addressPrefix": "172.17.0.0/16"
            }
          }
        ]
      },
      "virtualNetworkId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204"
      },
      "virtualNetworkName": {
        "type": "String",
        "value": "todgmvnet204"
      },
      "networkSecurityGroups": {
        "type": "Array",
        "value": [
          {
            "name": "basicNsgtodgmvnet204-nic01",
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01",
            "rules": []
          }
        ]
      },
      "networkInterfaceConfigurations": {
        "type": "Array",
        "value": [
          {
            "name": "todgmvnet204-nic01",
            "primary": true,
            "subnetId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default",
            "applicationGatewayBackendAddressPools": [],
            "loadBalancerBackendAddressPools": [],
            "applicationSecurityGroups": [],
            "loadBalancerInboundNatPools": [],
            "enableAcceleratedNetworking": true,
            "nsgName": "basicNsgtodgmvnet204-nic01",
            "nsgId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01",
            "pipName": ""
          }
        ]
      },
      "vmName": {
        "type": "String",
        "value": "Nvidiapcaeon"
      },
      "virtualMachineScaleSetName": {
        "type": "String",
        "value": "Nvidiapcaeon"
      },
      "singlePlacementGroup": {
        "type": "String",
        "value": "false"
      },
      "instanceCount": {
        "type": "String",
        "value": "4"
      },
      "instanceSize": {
        "type": "String",
        "value": "Standard_D8_v3"
      },
      "scaleInPolicy": {
        "type": "Object",
        "value": {
          "rules": [
            "NewestVM"
          ]
        }
      },
      "overprovision": {
        "type": "Bool",
        "value": true
      },
      "upgradePolicy": {
        "type": "String",
        "value": "Automatic"
      },
      "adminUsername": {
        "type": "String",
        "value": "nvidiahpcaeon"
      },
      "adminPassword": {
        "type": "SecureString"
      },
      "customData": {
        "type": "SecureString"
      },
      "healthExtensionProtocol": {
        "type": "String",
        "value": "http"
      },
      "healthExtensionPort": {
        "type": "Int",
        "value": 80
      },
      "healthExtensionRequestPath": {
        "type": "String",
        "value": "/"
      },
      "autoRepairsPolicyEnabled": {
        "type": "Bool",
        "value": false
      },
      "gracePeriod": {
        "type": "String",
        "value": "PT10M"
      },
      "platformFaultDomainCount": {
        "type": "String",
        "value": "1"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Succeeded",
    "timestamp": "2021-10-18T20:37:14.6907944Z",
    "duration": "PT1M21.2329228S",
    "correlationId": "871ddd89-cf5b-4871-a3c3-9697f3410bee",
    "providers": [
      {
        "namespace": "Microsoft.Network",
        "resourceTypes": [
          {
            "resourceType": "virtualNetworks",
            "locations": [
              "westus"
            ]
          },
          {
            "resourceType": "networkSecurityGroups",
            "locations": [
              "westus"
            ]
          }
        ]
      },
      {
        "namespace": "Microsoft.Compute",
        "resourceTypes": [
          {
            "resourceType": "virtualMachineScaleSets",
            "locations": [
              "westus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204",
            "resourceType": "Microsoft.Network/virtualNetworks",
            "resourceName": "todgmvnet204"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01",
            "resourceType": "Microsoft.Network/networkSecurityGroups",
            "resourceName": "basicNsgtodgmvnet204-nic01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
        "resourceType": "Microsoft.Compute/virtualMachineScaleSets",
        "resourceName": "Nvidiapcaeon"
      }
    ],
    "outputs": {
      "adminUsername": {
        "type": "String",
        "value": "nvidiahpcaeon"
      }
    },
    "outputResources": [
      {
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon"
      },
      {
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
      },

"53816efdb512fd6e051c8648264a915d21fc014f"<publishData><publishProfile profileName="cudo554 - Web Deploy" publishMethod="MSDeploy" publishUrl="cudo554.scm.azurewebsites.net:443" msdeploySite="cudo554" userName="$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile><publishProfile profileName="cudo554 - FTP" publishMethod="FTP" publishUrl="ftp://waws-prod-blu-217.ftp.azurewebsites.windows.net/site/wwwroot" ftpPassiveMode="True" userName="cudo554\$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile><publishProfile profileName="cudo554 - Zip Deploy" publishMethod="ZipDeploy" publishUrl="cudo554.scm.azurewebsites.net:443" userName="$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile></publishData>
"53816efdb512fd6e051c8648264a915d21fc014f"

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",
        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",
        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",
                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": false,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",
                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",
                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",
                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "ReadOnly",
                        "writeAcceleratorEnabled": false,
                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 1024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": false,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"
                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": false,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",
    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 2
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",
        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",
        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",
                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": false,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",
                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",
                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",
                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "ReadOnly",
                        "writeAcceleratorEnabled": false,
                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 1024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": false,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"
                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": false,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms","53816efdb512fd6e051c8648264a915d21fc014f"<publishData><publishProfile profileName="cudo554 - Web Deploy" publishMethod="MSDeploy" publishUrl="cudo554.scm.azurewebsites.net:443" msdeploySite="cudo554" userName="$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile><publishProfile profileName="cudo554 - FTP" publishMethod="FTP" publishUrl="ftp://waws-prod-blu-217.ftp.azurewebsites.windows.net/site/wwwroot" ftpPassiveMode="True" userName="cudo554\$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile><publishProfile profileName="cudo554 - Zip Deploy" publishMethod="ZipDeploy" publishUrl="cudo554.scm.azurewebsites.net:443" userName="$cudo554" userPWD="vBW3ikvx4P9zWGt3xmQ3YXDhH9xo2hYimqF07BNG9erKkzskdc1m6yw0fGAt" destinationAppUrl="http://cudo554.azurewebsites.net" SQLServerDBConnectionString="" mySQLDBConnectionString="" hostingProviderForumLink="" controlPanelLink="http://windows.azure.com" webSystem="WebSites"><databases /></publishProfile></publishData>
"53816efdb512fd6e051c8648264a915d21fc014f"

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",
        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",
        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",
                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": false,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",
                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",
                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",
                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "ReadOnly",
                        "writeAcceleratorEnabled": false,
                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 1024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": false,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"
                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": false,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",
    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 2
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}

        # This is unique ID of your farm
# The rig will autoregister itself in this farm after the first run
FARM_HASH="53816efdb512fd6e051c8648264a915d21fc014f"

#URL where hive server is
HIVE_HOST_URL="http://api.hiveos.farm"
API_HOST_URLs="http://api.hiveos.farm http://amster.hiveos.farm"

{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}

{
    "name": "Nvidiapcaeon",
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Compute/virtualMachineScaleSets/Nvidiapcaeon",
    "type": "Microsoft.Compute/virtualMachineScaleSets",
    "location": "westus",
    "tags": {
        "gpu29": "29"
    },
    "plan": {
        "name": "nvidia_hpc_sdk_vmi_20_11_1",
        "publisher": "nvidia",
        "product": "nvidia_hpc_sdk_vmi"
    },
    "identity": {
        "type": "SystemAssigned",
        "principalId": "b0d9b094-414c-42d6-8ba7-baf79a500041",
        "tenantId": "a4912d8c-3d21-41be-a097-faf7f792aa69"
    },
    "sku": {
        "name": "Standard_D8_v3",
        "tier": "Standard",
        "capacity": 4
    },
    "properties": {
        "singlePlacementGroup": false,
        "upgradePolicy": {
            "mode": "Automatic"
        },
        "scaleInPolicy": {
            "rules": [
                "NewestVM"
            ]
        },
        "virtualMachineProfile": {
            "osProfile": {
                "computerNamePrefix": "nvidiapca",
                "adminUsername": "nvidiahpcaeon",
                "linuxConfiguration": {
                    "disablePasswordAuthentication": false,
                    "provisionVMAgent": true
                },
                "secrets": [],
                "allowExtensionOperations": true,
                "requireGuestProvisionSignal": true
            },
            "storageProfile": {
                "osDisk": {
                    "osType": "Linux",
                    "createOption": "FromImage",
                    "caching": "ReadWrite",
                    "managedDisk": {
                        "storageAccountType": "StandardSSD_LRS"
                    },
                    "diskSizeGB": 32
                },
                "imageReference": {
                    "publisher": "nvidia",
                    "offer": "nvidia_hpc_sdk_vmi",
                    "sku": "nvidia_hpc_sdk_vmi_20_11_1",
                    "version": "latest"
                },
                "dataDisks": [
                    {
                        "lun": 0,
                        "createOption": "Empty",
                        "caching": "ReadOnly",
                        "writeAcceleratorEnabled": false,
                        "managedDisk": {
                            "storageAccountType": "StandardSSD_LRS"
                        },
                        "diskSizeGB": 1024
                    }
                ]
            },
            "networkProfile": {
                "networkInterfaceConfigurations": [
                    {
                        "name": "todgmvnet204-nic01",
                        "properties": {
                            "primary": true,
                            "enableAcceleratedNetworking": true,
                            "networkSecurityGroup": {
                                "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/networkSecurityGroups/basicNsgtodgmvnet204-nic01"
                            },
                            "dnsSettings": {
                                "dnsServers": []
                            },
                            "enableIPForwarding": false,
                            "ipConfigurations": [
                                {
                                    "name": "todgmvnet204-nic01-defaultIpConfiguration",
                                    "properties": {
                                        "primary": true,
                                        "subnet": {
                                            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204/subnets/default"
                                        },
                                        "privateIPAddressVersion": "IPv4"
                                    }
                                }
                            ]
                        }
                    }
                ]
            },
            "diagnosticsProfile": {
                "bootDiagnostics": {
                    "enabled": true
                }
            },
            "extensionProfile": {
                "extensions": [
                    {
                        "name": "HealthExtension",
                        "properties": {
                            "autoUpgradeMinorVersion": false,
                            "publisher": "Microsoft.ManagedServices",
                            "type": "ApplicationHealthLinux",
                            "typeHandlerVersion": "1.0",
                            "settings": {
                                "protocol": "http",
                                "port": 80,
                                "requestPath": "/"
                            }
                        }
                    }
                ]
            }
        },
        "provisioningState": "Succeeded",
        "overprovision": true,
        "doNotRunExtensionsOnOverprovisionedVMs": false,
        "uniqueId": "80d2da28-a74d-49cf-a67c-c9428d831dd2",
        "platformFaultDomainCount": 1,
        "automaticRepairsPolicy": {
            "enabled": false,
            "gracePeriod": "PT10M"
        }
    }
}


{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/20.83.156.249",
    "name": "20.83.156.249",
    "location": "eastus2",
    "properties": {
        "provisioningState": "Succeeded"
    }
}
sudo su '\curl -f https://download.hiveos.farm/hub/install.sh | sh\'
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "name": "Microsoft.Web-WebApp-Portal-b8f43556-a6ee",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
    "marketplaceItemId": "Microsoft.WebSite",
    "provisioningHash": "customize-post-provisioning-steps-webapp-deployment"
  },
  "properties": {
    "templateHash": "18133528362399802107",
    "parameters": {
      "subscriptionId": {
        "type": "String",
        "value": "f3f17f9f-4259-4e7f-b061-4b57fd6a0a26"
      },
      "name": {
        "type": "String",
        "value": "cudo554"
      },
      "location": {
        "type": "String",
        "value": "East US"
      },
      "hostingPlanName": {
        "type": "String",
        "value": "ASP-KeylaGodGame-9916"
      },
      "serverFarmResourceGroup": {
        "type": "String",
        "value": "KeylaGodGame"
      },
      "alwaysOn": {
        "type": "Bool",
        "value": true
      },
      "sku": {
        "type": "String",
        "value": "PremiumV3"
      },
      "skuCode": {
        "type": "String",
        "value": "P3V3"
      },
      "workerSize": {
        "type": "String",
        "value": "8"
      },
      "workerSizeId": {
        "type": "String",
        "value": "8"
      },
      "numberOfWorkers": {
        "type": "String",
        "value": "1"
      },
      "linuxFxVersion": {
        "type": "String",
        "value": "PYTHON|3.8"
      },
      "repoUrl": {
        "type": "String",
        "value": "https://github.com/todstephens80/t-rex"
      },
      "branch": {
        "type": "String",
        "value": "master"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T16:16:50.7292568Z",
    "duration": "PT0.3702633S",
    "correlationId": "51a9100e-0ccc-4bfb-b9a8-0402c8c60cd7",
    "providers": [
      {
        "namespace": "Microsoft.Web",
        "resourceTypes": [
          {
            "resourceType": "sites",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "sites/sourcecontrols",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "serverfarms",
            "locations": [
              "eastus"
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/serverfarms/ASP-KeylaGodGame-9916",
            "resourceType": "Microsoft.Web/serverfarms",
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",
    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 2
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}
            "resourceName": "ASP-KeylaGodGame-9916"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554",
        "resourceType": "Microsoft.Web/sites",
        "resourceName": "cudo554"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/Sites/cudo554",
            "resourceType": "Microsoft.Web/Sites",
            "resourceName": "cudo554"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Web/sites/cudo554/sourcecontrols/web",
        "resourceType": "Microsoft.Web/sites/sourcecontrols",
        "resourceName": "cudo554/web"
      }
    ],
    "validationLevel": "Template"
  }
}
{
    "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/bedroomgame_group-asr/providers/Microsoft.Network/dnszones/jontod.tod.global.microsoft.com",
    "name": "jontod.tod.global.microsoft.com",
    "type": "Microsoft.Network/dnszones",
    "etag": "7de9f924-5b61-4d52-b4f2-df03578c05b6",
    "location": "global",
    "tags": {
        "kubernetes-cluster-name": "kubernetes"
    },
    "properties": {
        "maxNumberOfRecordSets": 10000,
        "maxNumberOfRecordsPerRecordSet": null,
        "nameServers": [
            "ns1-37.azure-dns.com.",
            "ns2-37.azure-dns.net.",
            "ns3-37.azure-dns.org.",
            "ns4-37.azure-dns.info."
        ],
        "numberOfRecordSets": 2
    }
}
{
  "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.Resources/deployments/616de92ac2c31f03ad1c87f8",
  "name": "616de92ac2c31f03ad1c87f8",
  "type": "Microsoft.Resources/deployments",
  "tags": {
    "primaryResourceId": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourcegroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim"
  },
  "properties": {
    "templateHash": "10390909375829121394",
    "parameters": {
      "name": {
        "type": "String",
        "value": "cudo554-apim"
      },
      "location": {
        "type": "String",
        "value": "eastus"
      },
      "adminEmail": {
        "type": "String",
        "value": "serverminernd@outlook.com"
      },
      "orgName": {
        "type": "String",
        "value": "serverminernd"
      },
      "tier": {
        "type": "String",
        "value": "Consumption"
      },
      "loggerName": {
        "type": "String",
        "value": "fuckqueers"
      },
      "appInsightsId": {
        "type": "String",
        "value": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers"
      }
    },
    "mode": "Incremental",
    "debugSetting": {
      "detailLevel": "None"
    },
    "provisioningState": "Running",
    "timestamp": "2021-10-18T21:38:04.0795336Z",
    "duration": "PT3.4148026S",
    "correlationId": "29b2c571-b2f7-4469-816c-03a05e09dc45",
    "providers": [
      {
        "namespace": "Microsoft.ApiManagement",
        "resourceTypes": [
          {
            "resourceType": "service",
            "locations": [
              "eastus"
            ]
          },
          {
            "resourceType": "service/loggers",
            "locations": [
              null
            ]
          },
          {
            "resourceType": "service/diagnostics",
            "locations": [
              null
            ]
          }
        ]
      }
    ],
    "dependencies": [
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/resource/providers/microsoft.insights/components/fuckqueers",
            "resourceType": "microsoft.insights/components",
            "resourceName": "fuckqueers",
            "apiVersion": "2015-05-01"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
        "resourceType": "Microsoft.ApiManagement/service/loggers",
        "resourceName": "cudo554-apim/fuckqueers"
      },
      {
        "dependsOn": [
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim",
            "resourceType": "Microsoft.ApiManagement/service",
            "resourceName": "cudo554-apim"
          },
          {
            "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/loggers/fuckqueers",
            "resourceType": "Microsoft.ApiManagement/service/loggers",
            "resourceName": "cudo554-apim/fuckqueers"
          }
        ],
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/KeylaGodGame/providers/Microsoft.ApiManagement/service/cudo554-apim/diagnostics/applicationinsights",
        "resourceType": "Microsoft.ApiManagement/service/diagnostics",
        "resourceName": "cudo554-apim/applicationinsights"
      }
    ],
    "validationLevel": "Template"
  }
}
      {
        "id": "/subscriptions/f3f17f9f-4259-4e7f-b061-4b57fd6a0a26/resourceGroups/todgm/providers/Microsoft.Network/virtualNetworks/todgmvnet204"
      }
    ],
    "validationLevel": "Template"
  }
}"

#endif
