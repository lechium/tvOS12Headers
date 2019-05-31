//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVInterfaceCreating.h"

@class NSString, NSURL, TVImageProxy, TVViewElement, UINavigationController;

@protocol _TVInterfaceCreatingPrivate <TVInterfaceCreating>

@optional
- (UINavigationController *)_navigationControllerForTabIdentifier:(NSString *)arg1;
- (NSURL *)_styleSheetURLForTemplate:(NSString *)arg1;
- (TVImageProxy *)_imageProxyForElement:(TVViewElement *)arg1;
- (void)_parseAppConfigurationForElement:(TVViewElement *)arg1;
@end

