/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLDataProvider.h>

@interface NLPModelTrainingDataProvider : NLDataProvider {

	unsigned long long _numberOfInstances;
	void* _dataSource;
	/*^block*/id _instanceDataProvider;

}
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfInstances;
-(id)initWithConfiguration:(id)arg1 numberOfInstances:(unsigned long long)arg2 dataSource:(void*)arg3 instanceDataProvider:(/*^block*/id)arg4 ;
@end

