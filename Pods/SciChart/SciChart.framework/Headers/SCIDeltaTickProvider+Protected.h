//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDeltaTickProvider+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITickProvider+Protected.h"
#import "ISCIDeltaCalculator.h"
#import "ISCIRange.h"

/**
 * The extensions in this header are to be used only by subclasses of `SCIDeltaTickProvider`.
 */
@interface SCIDeltaTickProvider ()

@property (nonatomic) double currentVisibleRangeMin;
@property (nonatomic) double currentVisibleRangeMax;
@property (nonatomic) double currentMinorDelta;
@property (nonatomic) double currentMajorDelta;

/**
 * Creates a new instance of SCIDeltaTickProvider` class.
 * @param deltaCalculator The `ISCIDeltaCalculator` to use with this tick provider.
 */
- (instancetype)initWithDeltaCalculator:(id<ISCIDeltaCalculator>)deltaCalculator NS_DESIGNATED_INITIALIZER;

/**
 * Checks whether provided parameters are valid for this tick provider.
 * @param tickRange The Axis Visible Range.
 * @param minorDelta The minor delta value.
 * @param majorDelta The major delta value.
 * @return YES - if params are valid for this tick provider.
 */
- (BOOL)isValidRange:(id<ISCIRange>)tickRange minorDelta:(id<ISCIComparable>)minorDelta majorDelta:(id<ISCIComparable>)majorDelta;

/**
 * Guards that the tickRange, minor and major delta values are valid.
 * Throws an exception if some of the values is invalid.
 * @param tickRange The Axis Visible Range.
 * @param minorDelta The minor delta value.
 * @param majorDelta The major delta value.
 */
- (void)guardTickRange:(id<ISCIRange>)tickRange minorDelta:(id<ISCIComparable>)minorDelta majorDelta:(id<ISCIComparable>)majorDelta;

/**
 * Gets the index of specified major axis tick.
 * @param tick The major axis tick.
 * @return The index of major axis tick.
 */
- (int)getMajorTickIndex:(double)tick;

@end
