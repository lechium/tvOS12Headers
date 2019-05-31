/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _baseString;

}
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(Class)classForKeyedArchiver;
-(id)baseString;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithBaseString:(id)arg1 ;
-(id)_baseString;
-(id)glyphName;
-(unsigned long long)characterIdentifier;
-(unsigned long long)characterCollection;
-(unsigned short)glyphID;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
