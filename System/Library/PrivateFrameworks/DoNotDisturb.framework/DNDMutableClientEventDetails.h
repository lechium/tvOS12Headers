/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDClientEventDetails.h>

@class NSString, DNDClientEventSource;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) DNDClientEventSource * source; 
@property (assign,nonatomic) BOOL shouldAlwaysInterrupt; 
-(void)setShouldAlwaysInterrupt:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSource:(DNDClientEventSource *)arg1 ;
@end

