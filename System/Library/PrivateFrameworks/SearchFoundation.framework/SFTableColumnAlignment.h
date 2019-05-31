/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableColumnAlignment.h>
@class NSDictionary, NSData;


@protocol SFTableColumnAlignment <NSObject>
@property (assign,nonatomic) int columnAlignment; 
@property (assign,nonatomic) int dataAlignment; 
@property (assign,nonatomic) BOOL isEqualWidth; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;
-(void)setColumnAlignment:(int)arg1;
-(void)setDataAlignment:(int)arg1;
-(void)setIsEqualWidth:(BOOL)arg1;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _isEqualWidth;
	int _columnAlignment;
	int _dataAlignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int columnAlignment;                                    //@synthesize columnAlignment=_columnAlignment - In the implementation block
@property (assign,nonatomic) int dataAlignment;                                      //@synthesize dataAlignment=_dataAlignment - In the implementation block
@property (assign,nonatomic) BOOL isEqualWidth;                                      //@synthesize isEqualWidth=_isEqualWidth - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(int)columnAlignment;
-(int)dataAlignment;
-(BOOL)isEqualWidth;
-(BOOL)hasColumnAlignment;
-(BOOL)hasDataAlignment;
-(BOOL)hasIsEqualWidth;
-(void)setColumnAlignment:(int)arg1 ;
-(void)setDataAlignment:(int)arg1 ;
-(void)setIsEqualWidth:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

