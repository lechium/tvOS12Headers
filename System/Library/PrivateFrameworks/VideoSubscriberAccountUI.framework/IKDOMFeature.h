/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKAppContext;


@protocol IKDOMFeature <NSObject>
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@optional
-(void)migrateToViewElement:(id)arg1;

@required
+(id)makeFeatureJSObjectForFeature:(id)arg1;
-(NSString *)featureName;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
-(IKAppContext *)appContext;

@end
