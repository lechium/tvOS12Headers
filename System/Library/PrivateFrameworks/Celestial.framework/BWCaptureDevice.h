/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWCaptureDevice : NSObject

@property (nonatomic,readonly) int position; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) NSArray * supportedFormats; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (assign,nonatomic) float minimumFrameRate; 
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(NSArray *)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(long long)activeFormatIndex;
-(void)setActiveFormatIndex:(long long)arg1 ;
-(id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(BOOL)arg3 deliverOriginalImage:(BOOL)arg4 deliverSushiRaw:(BOOL)arg5 deliverBravoDualPhoto:(BOOL)arg6 includePreBracketedEV0ForProcessing:(BOOL)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(SCD_Struct_BW2)arg10 ;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW112*)arg1 ;
-(int)position;
@end

