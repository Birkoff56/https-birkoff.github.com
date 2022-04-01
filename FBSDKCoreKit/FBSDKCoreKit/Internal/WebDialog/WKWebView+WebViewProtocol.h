/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#if !TARGET_OS_TV

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(WebView)
@protocol FBSDKWebView;

@interface WKWebView (FBSDKWebView) <FBSDKWebView>
@end

NS_ASSUME_NONNULL_END

#endif
