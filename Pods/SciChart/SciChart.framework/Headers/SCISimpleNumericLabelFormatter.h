//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISimpleNumericLabelFormatter.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import "ISCILabelFormatter.h"
#import "ISCIAxisCore.h"

/**
 * Defines a default label formatter which is used by `SCINumericLabelProvider`.
 * @note `T` is the type of associated axis.
 */
@interface SCISimpleNumericLabelFormatter<T : id<ISCIAxisCore>> : NSObject<ISCILabelFormatter>

@end
