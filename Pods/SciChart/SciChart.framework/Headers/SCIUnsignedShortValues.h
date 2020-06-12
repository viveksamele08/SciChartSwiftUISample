//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUnsignedShortValues.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIValues.h"
#import "SCIDisposableBase.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a unsigned short values collection.
 */
@interface SCIUnsignedShortValues : SCIDisposableBase<ISCIValues>

/**
 * Maximum capacity of underlying array.
 */
@property (nonatomic, readonly) NSInteger capacity;

/**
 * Creates a new `SCIUnsignedShortValues` instance.
 * @param capacity The initial capacity.
 */
- (instancetype)initWithCapacity:(NSInteger)capacity NS_DESIGNATED_INITIALIZER;

/**
 * Creates a new `SCIUnsignedShortValues` instance and initializes it with specified array.
 * @param items The array with items.
 * @param count The count of passed in items.
 */
- (instancetype)initWithItems:(unsigned short *)items count:(NSInteger)count NS_REFINED_FOR_SWIFT;

/**
 * Gets the internal items array.
 * @return The items array.
 */
@property (nonatomic, readonly, getter=getItemsArray) unsigned short *itemsArray NS_REFINED_FOR_SWIFT;

/**
 * Adds new value.
 * @param value The value to add.
 */
- (void)add:(unsigned short)value;

/**
 * Adds new value at specified location.
 * @param index The location to add value at.
 * @param value The value to add.
 */
- (void)insert:(unsigned short)value at:(NSInteger)index;

/**
 * Adds multiple values from array.
 * @param values The values to add.
 * @param count The amount of values to add.
 */
- (void)addValues:(unsigned short *)values count:(NSInteger)count NS_REFINED_FOR_SWIFT;

/**
 * Adds multiple values from array region.
 * @param values The values array to add.
 * @param startIndex The index of first value to add.
 * @param count The amount of values to add.
 */
- (void)addValues:(unsigned short *)values startIndex:(NSInteger)startIndex count:(NSInteger)count NS_REFINED_FOR_SWIFT;

/**
 * Sets the value at specified location.
 * @param value The value to set.
 * @param index The index to set value at.
 */
- (void)set:(unsigned short)value at:(NSInteger)index;

/**
 * Gets the value at specified location.
 * @param index The index of value to get.
 * @return The value.
 */
- (unsigned short)getValueAt:(NSInteger)index;

/**
 * Removes value at specified location.
 * @param index The index to remove value at.
 */
- (void)removeAt:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
