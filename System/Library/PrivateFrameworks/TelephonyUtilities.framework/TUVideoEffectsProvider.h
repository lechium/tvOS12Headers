/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUVideoEffect, NSArray;


@protocol TUVideoEffectsProvider <NSObject>
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
@required
-(void)setCurrentVideoEffect:(id)arg1;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;

@end

