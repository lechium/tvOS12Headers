/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
@property (assign,setter=_setReadSingleSample:,getter=_readSingleSample,nonatomic) BOOL readSingleSample; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV6 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
+(id)_errorForOSStatus:(int)arg1 ;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(NSArray *)outputs;
-(void)finalize;
-(void)_setReadSingleSample:(BOOL)arg1 ;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(BOOL)_readSingleSample;
-(void)_handleServerDiedNotification;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(void)setTimeRange:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)timeRange;
-(void)_failWithError:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(BOOL)canAddOutput:(id)arg1 ;
-(BOOL)startReading;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)cancelReading;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)status;
-(AVAsset *)asset;
-(NSError *)error;
@end

