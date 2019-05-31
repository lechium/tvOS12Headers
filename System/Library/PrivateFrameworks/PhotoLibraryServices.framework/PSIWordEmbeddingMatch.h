/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PSIWordEmbeddingMatch : NSObject <NSSecureCoding> {

	NSString* _word;
	NSString* _extendedWord;
	double _score;

}

@property (readonly) NSString * word;                      //@synthesize word=_word - In the implementation block
@property (readonly) NSString * extendedWord;              //@synthesize extendedWord=_extendedWord - In the implementation block
@property (readonly) double score;                         //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)score;
-(NSString *)word;
-(NSString *)extendedWord;
-(id)initWithWord:(id)arg1 extendedWord:(id)arg2 score:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

