/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2010 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
#ifndef EQEMU_OPTIONS_H
#define EQEMU_OPTIONS_H

/**
 * Collects options on one object, because having a bunch of global variables floating around is
 * really ugly and just a little dangerous.
 */
class Options
{
public:
	/**
	* Constructor, sets the default options.
	*/
	Options() :
		auto_account_create(false),
		auto_account_activate(false),
		Login_Fails(false),
		Login_Good(false),
		allow_unregistered(true),
		trace(false),
		dump_in_packets(false),
		dump_out_packets(false),
		encryption_mode(5),
		local_network("127.0.0.1"),
		network_ip("127.0.0.1"),
		pass_salt(""),
		reject_duplicate_servers(false) { }

	/**
	* Sets allow_auto_account_create.
	*/
	inline void AutoCreate(bool b) { auto_account_create = b; }

	/**
	* Returns the value of auto_account_create.
	*/
	inline bool IsCreateOn() const { return auto_account_create; }

	/**
	* Sets allow_auto_account_activate.
	*/
	inline void AutoActivate(bool b) { auto_account_activate = b; }

	/**
	* Returns the value of auto_account_activate.
	*/
	inline bool IsActiveOn() const { return auto_account_activate; }

	/**
	* Sets logging of failed logins.
	*/
	inline void LoginFails(bool b) { Login_Fails = b; }

	/**
	* Sets logging of failed logins.
	*/
	inline void LoginGood(bool b) { Login_Good = b; }

	/**
	* Logs failed logins and reason.
	*/
	inline bool IsLoginFailsOn() const { return Login_Fails; }

	/**
	* Logs successful logins.
	*/
	inline bool IsLoggedOn() const { return Login_Good; }

	/**
	* Sets allow_unregistered.
	*/
	inline void AllowUnregistered(bool b) { allow_unregistered = b; }

	/**
	* Returns the value of allow_unregistered.
	*/
	inline bool IsUnregisteredAllowed() const { return allow_unregistered; }

	/**
	* Sets trace.
	*/
	inline void Trace(bool b) { trace = b; }

	/**
	* Returns the value of trace.
	*/
	inline bool IsTraceOn() const { return trace; }

	/**
	* Sets trace.
	*/
	inline void WorldTrace(bool b) { world_trace = b; }

	/**
	* Returns the value of trace.
	*/
	inline bool IsWorldTraceOn() const { return world_trace; }

	/**
	* Sets dump_in_packets.
	*/
	inline void DumpInPackets(bool b) { dump_in_packets = b; }

	/**
	* Returns the value of dump_in_packets.
	*/
	inline bool IsDumpInPacketsOn() const { return dump_in_packets; }

	/**
	* Sets dump_out_packets.
	*/
	inline void DumpOutPackets(bool b) { dump_out_packets = b; }

	/**
	* Returns the value of dump_out_packets.
	*/
	inline bool IsDumpOutPacketsOn() const { return dump_out_packets; }

	/**
	* Sets encryption_mode.
	*/
	inline void EncryptionMode(int m) { encryption_mode = m; }

	/**
	* Returns the value of encryption_mode.
	*/
	inline int GetEncryptionMode() const { return encryption_mode; }

	/**
	* Sets local_network.
	*/
	inline void LocalNetwork(std::string n) { local_network = n; }

	/**
	* Sets local_network.
	*/
	inline void NetworkIP(std::string n) { network_ip = n; }

	/**
	* Return the value of local_network.
	*/
	inline std::string GetLocalNetwork() const { return local_network; }

	/**
	* Return the value of local_network.
	*/
	inline std::string GetNetworkIP() const { return network_ip; }

	/**
	* Sets password salt
	*/
	inline void SetSalt(std::string n) { pass_salt = n; }
	
	/**
	* Return the value of the password salt
	*/
	inline std::string GetSalt() const { return pass_salt; }

	/**
	* Sets account table.
	*/
	inline void AccountTable(std::string t) { account_table = t; }

	/**
	* Gets access log table.
	*/
	inline std::string GetAccessLogTable() const { return access_log_table; }

	/**
	* Sets access log table.
	*/
	inline void AccountAccessLogTable(std::string t) { access_log_table = t; }

	/**
	* Return the value of local_network.
	*/
	inline std::string GetAccountTable() const { return account_table; }
	
	/**
	* Sets world account table.
	*/
	inline void WorldRegistrationTable(std::string t) { world_registration_table = t; }

	/**
	* Return the value of world account table.
	*/
	inline std::string GetWorldRegistrationTable() const { return world_registration_table; }

	/**
	* Sets world admin account table.
	*/
	inline void WorldAdminRegistrationTable(std::string t) { world_admin_registration_table = t; }

	/**
	* Return the value of world admin account table.
	*/
	inline std::string GetWorldAdminRegistrationTable() const { return world_admin_registration_table; }

	/**
	* Sets world server type table.
	*/
	inline void WorldServerTypeTable(std::string t) { world_server_type_table = t; }

	/**
	* Return the value of world admin account table.
	*/
	inline std::string GetWorldServerTypeTable() const { return world_server_type_table; }

	/**
	* Sets whether we are rejecting duplicate servers or not.
	*/
	inline void RejectDuplicateServers(bool b) { reject_duplicate_servers = b; }

	/**
	* Returns whether we are rejecting duplicate servers or not.
	*/
	inline bool IsRejectingDuplicateServers() { return reject_duplicate_servers; }

private:
	bool auto_account_create;
	bool auto_account_activate;
	bool Login_Fails;
	bool Login_Good;
	bool allow_unregistered;
	bool trace;
	bool world_trace;
	bool dump_in_packets;
	bool dump_out_packets;
	bool reject_duplicate_servers;
	int encryption_mode;
	std::string local_network;
	std::string network_ip;
	std::string pass_salt;
	std::string access_log_table;
	std::string account_table;
	std::string world_account_table;
	std::string world_registration_table;
	std::string world_admin_registration_table;
	std::string world_server_type_table;
};

#endif