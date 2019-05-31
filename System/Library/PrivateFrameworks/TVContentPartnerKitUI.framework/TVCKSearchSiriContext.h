/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKSearchSiriContextDelegate;
#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSString;

@interface TVCKSearchSiriContext : NSObject {

	struct {
		unsigned _respondsToDidSelectContentItemInPartialScreenPluginMode : 1;
		unsigned _respondsToDidPlayContentItemInPartialScreenPluginMode : 1;
		unsigned _respondsToFetchNextBatch : 1;
		unsigned _respondsToSendMetricsWithCategory : 1;
	}  _delegateFlags;
	id<TVCKSearchSiriContextDelegate> _delegate;
	NSString* _pluginMode;

}

@property (assign,nonatomic,__weak) id<TVCKSearchSiriContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pluginMode;                                            //@synthesize pluginMode=_pluginMode - In the implementation block
-(NSString *)pluginMode;
-(void)_didSelectContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)_didPlayContentItemInPartialScreenPluginMode:(id)arg1 ;
-(void)_fetchNextBatch:(id)arg1 ;
-(void)_sendMetricsWithCategory:(id)arg1 info:(id)arg2 ;
-(id)initWithPluginMode:(id)arg1 ;
-(void)setPluginMode:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(void)setDelegate:(id<TVCKSearchSiriContextDelegate>)arg1 ;
-(id<TVCKSearchSiriContextDelegate>)delegate;
@end
