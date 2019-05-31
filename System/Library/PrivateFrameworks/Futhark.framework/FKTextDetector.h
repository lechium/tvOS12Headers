/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Futhark/Futhark-Structs.h>
@class NSString;

@interface FKTextDetector : NSObject {

	FKSession* _sessions[8];
	CGSize _size;
	CGRect _roi;
	unsigned _timeDownscale[8];
	unsigned _timeBinarizer[8];
	unsigned _timeConcomps[8];
	unsigned _timeSequences[8];
	unsigned _timeRecognizer[8];
	BOOL _detectDiacritics;
	BOOL _returnSubFeatures;
	BOOL _minimizeFalseDetections;
	BOOL _createFeaturesForAllConcomps;
	BOOL _enableBinarizerFiltering;
	int _minimumCharacterHeight;
	int _binarizerLimit;
	long long _thresholdingAlgorithm;
	NSString* _recognitionLanguage;
	SCD_Union_FK0 _mergeSettings;

}

@property (assign,nonatomic) BOOL createFeaturesForAllConcomps;              //@synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps - In the implementation block
@property (assign,nonatomic) BOOL enableBinarizerFiltering;                  //@synthesize enableBinarizerFiltering=_enableBinarizerFiltering - In the implementation block
@property (assign,nonatomic) SCD_Union_FK0 mergeSettings;                    //@synthesize mergeSettings=_mergeSettings - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                          //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) int minimumCharacterHeight;                     //@synthesize minimumCharacterHeight=_minimumCharacterHeight - In the implementation block
@property (assign,nonatomic) long long thresholdingAlgorithm;                //@synthesize thresholdingAlgorithm=_thresholdingAlgorithm - In the implementation block
@property (assign,nonatomic) int binarizerLimit;                             //@synthesize binarizerLimit=_binarizerLimit - In the implementation block
@property (nonatomic,copy) NSString * recognitionLanguage;                   //@synthesize recognitionLanguage=_recognitionLanguage - In the implementation block
@property (assign,nonatomic) BOOL returnSubFeatures;                         //@synthesize returnSubFeatures=_returnSubFeatures - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalseDetections;                   //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
-(void)resetOptions;
-(void)resetTimers;
-(void)setThresholdingAlgorithm:(long long)arg1 ;
-(void)setEnableBinarizerFiltering:(BOOL)arg1 ;
-(void)setMergeSettings:(SCD_Union_FK0)arg1 ;
-(BOOL)createFeaturesForAllConcomps;
-(SCD_Union_FK0)mergeSettings;
-(id)createFeaturesForSessionScale:(int)arg1 roi:(CGRect)arg2 originalSize:(CGSize)arg3 startID:(long long*)arg4 ;
-(void)mergeFeature:(id)arg1 withArray:(id)arg2 ;
-(unsigned char)isValidPixelBuffer:(CVBufferRef)arg1 regionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(void)translatePropertiesToOptionsWithNumSessions:(int)arg1 ;
-(id)createFeaturesForROI:(CGRect)arg1 originalSize:(CGSize)arg2 lastID:(long long*)arg3 ;
-(void)runRecognizerOnFeatures:(id)arg1 roi:(CGRect)arg2 size:(CGSize)arg3 lastID:(long long*)arg4 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(long long)thresholdingAlgorithm;
-(int)binarizerLimit;
-(void)setBinarizerLimit:(int)arg1 ;
-(void)setCreateFeaturesForAllConcomps:(BOOL)arg1 ;
-(BOOL)enableBinarizerFiltering;
-(BOOL)detectDiacritics;
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(BOOL)minimizeFalseDetections;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(id)initWithDimensions:(CGSize)arg1 ;
-(void)setMinimumCharacterHeight:(int)arg1 ;
-(void)setRecognitionLanguage:(NSString *)arg1 ;
-(void)setReturnSubFeatures:(BOOL)arg1 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 withRegionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(int)minimumCharacterHeight;
-(BOOL)returnSubFeatures;
-(NSString *)recognitionLanguage;
-(void)dealloc;
@end

