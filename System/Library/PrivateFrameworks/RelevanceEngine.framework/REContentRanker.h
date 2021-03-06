/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/RELoggable.h>

@class NSString;

@interface REContentRanker : NSObject <RELoggable> {

	REContentFeatureExtractor* _extractor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load:(id)arg1 error:(id*)arg2 ;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(BOOL)save:(id)arg1 error:(id*)arg2 ;
-(BOOL)train:(id)arg1 isPositive:(BOOL)arg2 ;
-(id)predict:(id)arg1 ;
-(long long)positiveMapSize;
-(long long)negativeMapSize;
-(id)init;
@end

