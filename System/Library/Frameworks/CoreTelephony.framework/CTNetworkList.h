/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding> {

	BOOL _moreComing;
	NSMutableArray* _networks;

}

@property (nonatomic,retain) NSMutableArray * networks;              //@synthesize networks=_networks - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                        //@synthesize moreComing=_moreComing - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(NSMutableArray *)networks;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

