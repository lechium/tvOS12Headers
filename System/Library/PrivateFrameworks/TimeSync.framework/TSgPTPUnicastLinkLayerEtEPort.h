/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastLinkLayerEtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andMACAddress:(char*)arg2 ;
-(int)portType;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andMACAddress:(char*)arg2 ;
-(void)dealloc;
@end

