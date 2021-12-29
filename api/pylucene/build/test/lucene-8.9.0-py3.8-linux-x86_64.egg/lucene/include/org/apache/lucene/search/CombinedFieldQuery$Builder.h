#ifndef org_apache_lucene_search_CombinedFieldQuery$Builder_H
#define org_apache_lucene_search_CombinedFieldQuery$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class CombinedFieldQuery;
        class CombinedFieldQuery$Builder;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class CombinedFieldQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_addField_92786a8da06745de,
            mid_addField_1cc94505b7eafb8c,
            mid_addTerm_cd7375b3d94de00c,
            mid_build_d474dc0d0a05e373,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CombinedFieldQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CombinedFieldQuery$Builder(const CombinedFieldQuery$Builder& obj) : ::java::lang::Object(obj) {}

          CombinedFieldQuery$Builder();

          CombinedFieldQuery$Builder addField(const ::java::lang::String &) const;
          CombinedFieldQuery$Builder addField(const ::java::lang::String &, jfloat) const;
          CombinedFieldQuery$Builder addTerm(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::search::CombinedFieldQuery build() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(CombinedFieldQuery$Builder);
        extern PyTypeObject *PY_TYPE(CombinedFieldQuery$Builder);

        class t_CombinedFieldQuery$Builder {
        public:
          PyObject_HEAD
          CombinedFieldQuery$Builder object;
          static PyObject *wrap_Object(const CombinedFieldQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
