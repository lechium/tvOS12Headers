/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RERelevanceCondition : NSObject <NSCopying> {

	/*^block*/id _condition;

}
+(id)conditionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCondtionBlock:(/*^block*/id)arg1 ;
-(float)_evaluateRelevanceWithEnvironment:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
@end

