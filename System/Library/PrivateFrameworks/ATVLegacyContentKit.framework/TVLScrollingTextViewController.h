/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVScrollingTextViewController.h>
#import <libobjc.A.dylib/TVScrollingTextViewControllerDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class NSString;

@interface TVLScrollingTextViewController : TVScrollingTextViewController <TVScrollingTextViewControllerDelegate, ATVUpdatable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)scrollingTextView:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(id)initWithScrollingTextElement:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

