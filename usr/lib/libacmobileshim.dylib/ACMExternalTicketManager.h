/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMTicketManager.h>
#import <libobjc.A.dylib/ACMTicketManagerProtocol.h>

@class NSString;

@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)clientID;
-(id)deviceIdentifier;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)twoSVPersonIDForPrincipal:(id)arg1 ;
-(id)twoSVSecretForPrincipal:(id)arg1 ;
-(id)twoSVCreateDateForPrincipal:(id)arg1 ;
-(void)tokenDidReceive2SVSecret:(id)arg1 ;
-(id)identifier;
-(id)preferences;
@end
