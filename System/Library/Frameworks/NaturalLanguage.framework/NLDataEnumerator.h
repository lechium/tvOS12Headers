/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NLDataProvider;

@interface NLDataEnumerator : NSObject {

	NLDataProvider* _dataProvider;
	unsigned long long _idx;

}
-(id)nextInstance;
-(id)initWithDataProvider:(id)arg1 ;
@end
