/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding> {

	TUHandle* _handle;
	NSString* _label;

}

@property (nonatomic,readonly) TUHandle * handle;                  //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(TUHandle *)handle;
-(id)initWithHandle:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqualToLabeledHandle:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

