//
//  MPGeneralSettingsController.h
//  MacPass
//
//  Created by Michael Starke on 23.07.12.
//  Copyright (c) 2012 HicknHack Software GmbH. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Cocoa/Cocoa.h>
#import "MPViewController.h"
#import "MPPreferencesTab.h"

@interface MPGeneralSettingsController : MPViewController <MPPreferencesTab>

@property (weak) IBOutlet NSButton *clearPasteboardOnQuitCheckButton;
@property (weak) IBOutlet NSPopUpButton *clearPasteboardTimeoutPopup;
@property (weak) IBOutlet NSPopUpButton *idleTimeOutPopup;
@property (weak) IBOutlet NSButton *lockOnSleepCheckButton;
@property (weak) IBOutlet NSButton *lockOnLogoutCheckButton;
@property (weak) IBOutlet NSButton *reopenLastDatabase;
@property (weak) IBOutlet NSButton *createUntitledOnActivation;
@property (weak) IBOutlet NSButton *rememberKeyFileCheckButton;
@property (weak) IBOutlet NSPopUpButton *fileChangeStrategyPopup;

@end
