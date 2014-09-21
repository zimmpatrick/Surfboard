//
//  MBSurfboardViewController.h
//  Surfboard
//
//  Created by Moshe on 8/10/14.
//  Copyright (c) 2014 Moshe Berman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SRFSurfboardDelegate.h"

@interface SRFSurfboardViewController : UICollectionViewController

#pragma mark - Delegate

/** ---
 *  @name Delegate
 *  ---
 */

@property (nonatomic, assign) id<SRFSurfboardDelegate> delegate;

#pragma mark - Colors

/** ---
 *  @name Color
 *  ---
 */

/**
 *  The tint color of the cells.
 */

@property (nonatomic, strong) UIColor *tintColor;

/**
 *  The background color of the view.
 */

@property (nonatomic, strong) UIColor *backgroundColor;

/**
 *  A page control.
 */

@property (nonatomic, strong) UIPageControl *pageControl;

#pragma mark - Initializers


/**
 *  Instantiates a new surfboard with a path to a JSON configuration file
 *
 *  @param path path to a JSON configuration file.
 *  @return An SRFSurfboardViewController.
 */

- (instancetype)initWithPathToConfiguration:(NSString *)path;

/**
 *  Instantiates a new surfboard with an array of panel objects.
 *
 *  @param panels An array of panels.
 *  @return An SRFSurfboardViewController
 */

#ifndef NS_DESIGNATED_INITIALIZER
#if __has_attribute(objc_designated_initializer)
#define NS_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
#else
#define NS_DESIGNATED_INITIALIZER
#endif
#endif

- (instancetype)initWithPanels:(NSArray *)panels NS_DESIGNATED_INITIALIZER;

/**
 *  Instantiates a new surfboard with an array of panel configuration dictionaries.
 *
 *  @param configuration An rray of panel configuration dictionaries.
 *  @return An SRFSurfboardViewController.
 */

- (instancetype)initWithConfiguration:(NSArray *)configuration;

#pragma mark - Setting the Panels After Initializing

/** ---
 *  @name Setting the Panels After Initializing
 *  ---
 */

/**
 *  Sets the panels and reloads the surfboard.
 *
 *  @param panels An array of panels.
 */

- (void)setPanels:(NSArray *)panels;


@end
