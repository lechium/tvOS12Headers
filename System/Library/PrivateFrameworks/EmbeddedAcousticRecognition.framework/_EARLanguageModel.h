/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARLanguageModel : NSObject {

	vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > >* _dataSources;
	float _totalWeight;

}

@property (nonatomic,readonly) float totalWeight;              //@synthesize totalWeight=_totalWeight - In the implementation block
-(void)enumerateDataSourcesAndWeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)addDataSource:(id)arg1 weight:(float)arg2 ;
-(float)totalWeight;
@end

