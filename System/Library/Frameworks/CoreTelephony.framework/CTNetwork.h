/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTNetwork : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _plmn;
	NSString* _rat;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * plmn;              //@synthesize plmn=_plmn - In the implementation block
@property (nonatomic,retain) NSString * rat;               //@synthesize rat=_rat - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)plmn;
-(NSString *)rat;
-(void)setPlmn:(NSString *)arg1 ;
-(void)setRat:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

