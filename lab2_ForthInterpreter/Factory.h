#pragma once

#include <map>
#include <stdexcept>


template<class BaseProduct, typename Identifier, typename CreatorProduct>
class Factory {
public:
	BaseProduct* CreateCommand(const Identifier& name) {
		if (creators_.count(name) == 0) {
			throw std::invalid_argument("Error: unknown command");
			//return nullptr;
		}
		return creators_[name]();
	}
	void RegisterCommand(const Identifier& name, CreatorProduct creator) {
		creators_[name] = creator;
	}

private:
	std::map<Identifier, CreatorProduct> creators_;
};


