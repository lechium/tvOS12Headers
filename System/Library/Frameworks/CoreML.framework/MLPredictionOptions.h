/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLPredictionOptions : NSObject {

	BOOL _usesCPUOnly;
	unsigned long long _classifyTopK;
	unsigned long long _maxComputationBatchSize;

}

@property (assign) unsigned long long classifyTopK;                         //@synthesize classifyTopK=_classifyTopK - In the implementation block
@property (assign) BOOL useCPUOnly; 
@property (assign) unsigned long long maxComputationBatchSize;              //@synthesize maxComputationBatchSize=_maxComputationBatchSize - In the implementation block
@property (assign,nonatomic) BOOL usesCPUOnly;                              //@synthesize usesCPUOnly=_usesCPUOnly - In the implementation block
+(id)defaultOptions;
-(unsigned long long)classifyTopK;
-(id)initWithUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithUseCPUOnly:(BOOL)arg1 ;
-(BOOL)useCPUOnly;
-(void)setUseCPUOnly:(BOOL)arg1 ;
-(void)setClassifyTopK:(unsigned long long)arg1 ;
-(unsigned long long)maxComputationBatchSize;
-(void)setMaxComputationBatchSize:(unsigned long long)arg1 ;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(BOOL)usesCPUOnly;
-(id)init;
@end

