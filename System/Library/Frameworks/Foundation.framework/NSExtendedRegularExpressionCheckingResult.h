/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSRange _ranges[7];

}
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(id)regularExpression;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
-(id)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(unsigned long long)numberOfRanges;
-(void)dealloc;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(NSRange)range;
@end
