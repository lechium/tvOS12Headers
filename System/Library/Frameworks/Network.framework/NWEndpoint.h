/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_endpoint;
@class NSObject, NWInterface, NSData, NSString;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying> {

	NSObject*<OS_nw_endpoint> _internalEndpoint;

}

@property (nonatomic,retain) NSObject*<OS_nw_endpoint> internalEndpoint;              //@synthesize internalEndpoint=_internalEndpoint - In the implementation block
@property (nonatomic,retain) NWInterface * interface; 
@property (nonatomic,retain) NSData * txtRecord; 
@property (nonatomic,readonly) NSString * parentEndpointDomain; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (assign,nonatomic) unsigned short alternatePort; 
+(id)endpointWithCEndpoint:(id)arg1 ;
+(BOOL)supportsResolverCallback;
+(unsigned)endpointType;
+(Class)copyClassForEndpointType:(int)arg1 ;
+(id)endpointWithInternalEndpoint:(id)arg1 ;
+(id)endpointWithProtocolBufferData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithEndpoint:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)internalEndpoint;
-(void)setInternalEndpoint:(NSObject*<OS_nw_endpoint>)arg1 ;
-(id)copyCEndpoint;
-(id)initWithEncodedData:(id)arg1 ;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSData *)txtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(NSString *)parentEndpointDomain;
-(unsigned short)alternatePort;
-(void)setAlternatePort:(unsigned short)arg1 ;
-(id)createProtocolBufferObject;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)encodedData;
-(NWInterface *)interface;
-(void)setInterface:(NWInterface *)arg1 ;
@end
