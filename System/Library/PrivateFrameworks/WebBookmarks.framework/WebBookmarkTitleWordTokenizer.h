/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned long long _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned long long _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(NSRange)advanceToNextToken;
-(id)init;
-(void)setString:(id)arg1 ;
@end
