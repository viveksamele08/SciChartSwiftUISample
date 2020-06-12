//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIXyDataSeriesValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIList.h"
#import "ISCIXDataSeriesValues.h"

/**
 * Defines the interface to an Xy DataSeries values, a series containing X and Y data-points.
 */
 @protocol ISCIXyDataSeriesValues <ISCIXDataSeriesValues>
 
/**
 * Gets the Y Values of this series
 */
@property (nonatomic, readonly) id<ISCIList> yValues;

@end
