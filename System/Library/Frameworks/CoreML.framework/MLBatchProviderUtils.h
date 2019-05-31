/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLBatchProviderUtils : NSObject
+(id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3 ;
+(id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id*)arg3 ;
+(id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2 ;
+(id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)batchFromConcatinatingBatches:(id)arg1 ;
+(id)featureNamesInBatch:(id)arg1 ;
+(id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2 ;
+(id)dictionaryFromBatch:(id)arg1 ;
+(id)featureProviderArrayFromBatch:(id)arg1 ;
+(id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id*)arg3 ;
+(id)featureDescriptionsByNameForBatch:(id)arg1 error:(id*)arg2 ;
+(BOOL)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id*)arg4 ;
@end

