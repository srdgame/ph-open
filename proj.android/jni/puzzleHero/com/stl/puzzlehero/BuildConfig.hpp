/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.stl.puzzlehero.BuildConfig
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_DECL
#define J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace stl { namespace puzzlehero {

	class BuildConfig;
	class BuildConfig
		: public object<BuildConfig>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit BuildConfig(jobject jobj)
		: object<BuildConfig>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		BuildConfig();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jboolean > DEBUG;
	}; //class BuildConfig

} //namespace puzzlehero
} //namespace stl
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_IMPL
#define J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_IMPL

namespace j2cpp {



com::stl::puzzlehero::BuildConfig::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::stl::puzzlehero::BuildConfig::BuildConfig()
: object<com::stl::puzzlehero::BuildConfig>(
	call_new_object<
		com::stl::puzzlehero::BuildConfig::J2CPP_CLASS_NAME,
		com::stl::puzzlehero::BuildConfig::J2CPP_METHOD_NAME(0),
		com::stl::puzzlehero::BuildConfig::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



static_field<
	com::stl::puzzlehero::BuildConfig::J2CPP_CLASS_NAME,
	com::stl::puzzlehero::BuildConfig::J2CPP_FIELD_NAME(0),
	com::stl::puzzlehero::BuildConfig::J2CPP_FIELD_SIGNATURE(0),
	jboolean
> com::stl::puzzlehero::BuildConfig::DEBUG;


J2CPP_DEFINE_CLASS(com::stl::puzzlehero::BuildConfig,"com/stl/puzzlehero/BuildConfig")
J2CPP_DEFINE_METHOD(com::stl::puzzlehero::BuildConfig,0,"<init>","()V")
J2CPP_DEFINE_FIELD(com::stl::puzzlehero::BuildConfig,0,"DEBUG","Z")

} //namespace j2cpp

#endif //J2CPP_COM_STL_PUZZLEHERO_BUILDCONFIG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION