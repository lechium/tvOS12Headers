/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@class NSArray;

@interface MLIndexedBatchProvider : NSObject <MLBatchProvider> {

	id<MLBatchProvider> _fullBatch;
	NSArray* _indices;

}

@property (nonatomic,retain) id<MLBatchProvider> fullBatch;              //@synthesize fullBatch=_fullBatch - In the implementation block
@property (nonatomic,retain) NSArray * indices;                          //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)featuresAtIndex:(long long)arg1 ;
-(id<MLBatchProvider>)fullBatch;
-(void)setFullBatch:(id<MLBatchProvider>)arg1 ;
-(id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3 ;
-(NSArray *)indices;
-(void)setIndices:(NSArray *)arg1 ;
-(long long)count;
@end

