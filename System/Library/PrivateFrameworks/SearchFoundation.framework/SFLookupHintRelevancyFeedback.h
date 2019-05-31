/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFLookupHintRelevancyFeedback : SFFeedback {

	BOOL _discarded;
	NSString* _context;
	NSString* _domain;
	unsigned long long _grade;
	NSRange _hintRange;

}

@property (nonatomic,copy) NSString * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) NSRange hintRange;                     //@synthesize hintRange=_hintRange - In the implementation block
@property (nonatomic,copy) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL discarded;                        //@synthesize discarded=_discarded - In the implementation block
@property (assign,nonatomic) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)grade;
-(id)initWithContext:(id)arg1 hintRange:(NSRange)arg2 domain:(id)arg3 discarded:(BOOL)arg4 grade:(unsigned long long)arg5 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setHintRange:(NSRange)arg1 ;
-(void)setDiscarded:(BOOL)arg1 ;
-(void)setGrade:(unsigned long long)arg1 ;
-(NSRange)hintRange;
-(BOOL)discarded;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)context;
-(NSString *)domain;
@end
