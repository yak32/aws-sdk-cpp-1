﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/worklink/model/DisassociateWebsiteCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateWebsiteCertificateAuthorityRequest::DisassociateWebsiteCertificateAuthorityRequest() : 
    m_fleetArnHasBeenSet(false),
    m_websiteCaIdHasBeenSet(false)
{
}

Aws::String DisassociateWebsiteCertificateAuthorityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_websiteCaIdHasBeenSet)
  {
   payload.WithString("WebsiteCaId", m_websiteCaId);

  }

  return payload.View().WriteReadable();
}




